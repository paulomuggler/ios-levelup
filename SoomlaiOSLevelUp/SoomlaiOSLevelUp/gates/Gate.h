/*
 Copyright (C) 2012-2014 Soomla Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

// TODO: Document abstract class
@interface Gate : NSObject {
    
    @private
    NSString* gateId;
}

@property (strong, nonatomic) NSString* gateId;

- (id)initWithGateId:(NSString *)oGateId;

- (id)initWithDictionary:(NSDictionary *)dict;

- (NSDictionary*)toDictionary;

- (BOOL)tryOpen;

- (void)forceOpen:(BOOL)open;

- (BOOL)isOpen;

// ABSTRACT

- (BOOL)tryOpenInner;

- (BOOL)canOpen;

// Static methods

+ (Gate *)fromDictionary:(NSDictionary *)dict;

+ (NSString *)getTypeName;

@end