//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASettingSupplier-Protocol.h>

@class NSString, SASettingEntity;

@interface SASettingGetValueResponse <SASettingSupplier>
{
}

+ (id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002db27
+ (id)getValueResponse;	// IMP=0x000000000002db15
- (_Bool)requiresResponse;	// IMP=0x000000000002db53
@property(retain, nonatomic) SASettingEntity *setting;
- (id)encodedClassName;	// IMP=0x000000000002db08
- (id)groupIdentifier;	// IMP=0x000000000002daf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

