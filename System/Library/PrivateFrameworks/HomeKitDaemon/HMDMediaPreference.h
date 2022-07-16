//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFPreference.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMFSystemPreference, NSArray, NSString;

@interface HMDMediaPreference : HMFPreference <HMFObject>
{
    HMFSystemPreference *_homeKitPreference;	// 8 = 0x8
}

+ (void)load;	// IMP=0x000000000024c052
- (void).cxx_destruct;	// IMP=0x000000000024c03f
@property(readonly) HMFSystemPreference *homeKitPreference; // @synthesize homeKitPreference=_homeKitPreference;
- (id)stringValue;	// IMP=0x000000000024bfd9
- (id)numberValue;	// IMP=0x000000000024beb0
- (_Bool)boolValue;	// IMP=0x000000000024be6c
@property(readonly, copy) HMFPreference *airPlay2Preference;
@property(readonly, copy) HMFPreference *appleMediaPreference;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;	// IMP=0x000000000024bbd9

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

