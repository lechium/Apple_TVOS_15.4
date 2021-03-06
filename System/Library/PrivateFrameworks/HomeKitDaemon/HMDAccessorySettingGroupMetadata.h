//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject>
{
    NSString *_name;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
    NSArray *_settings;	// 32 = 0x20
}

+ (id)groupWithDictonaryRepresentation:(id)arg1 parentKeyPath:(id)arg2;	// IMP=0x00000000002e6850
+ (id)groupsWithArrayRepresenation:(id)arg1 parentKeyPath:(id)arg2;	// IMP=0x00000000002e662d
- (void).cxx_destruct;	// IMP=0x00000000002e65da
@property(readonly, copy) NSArray *settings; // @synthesize settings=_settings;
@property(readonly, copy) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)modelsWithParentIdentifier:(id)arg1;	// IMP=0x00000000002e611f
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 parentKeyPath:(id)arg4;	// IMP=0x00000000002e5e29
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3;	// IMP=0x00000000002e5e14

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

