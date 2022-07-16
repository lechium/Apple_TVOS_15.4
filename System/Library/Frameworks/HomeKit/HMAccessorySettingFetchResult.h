//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>

@class HMImmutableSetting, NSArray, NSError, NSString;

@interface HMAccessorySettingFetchResult : NSObject <HMFObject>
{
    NSString *_keyPath;	// 8 = 0x8
    HMImmutableSetting *_setting;	// 16 = 0x10
    long long _failureType;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000000b0454
+ (id)fetchResultsWithKeyPaths:(id)arg1 failureType:(long long)arg2;	// IMP=0x00000000000b03f6
- (void).cxx_destruct;	// IMP=0x00000000000b03ce
@property(readonly) long long failureType; // @synthesize failureType=_failureType;
@property(readonly) HMImmutableSetting *setting; // @synthesize setting=_setting;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly, copy) NSError *error;
- (id)initWithKeyPath:(id)arg1 setting:(id)arg2 failureType:(long long)arg3;	// IMP=0x00000000000b00a6
- (id)initWithKeyPath:(id)arg1 failureType:(long long)arg2;	// IMP=0x00000000000b008f
- (id)initWithSetting:(id)arg1;	// IMP=0x00000000000b000d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

