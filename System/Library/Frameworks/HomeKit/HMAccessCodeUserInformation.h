//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>

@class HMRemovedUserInfo, HMUser, NSArray, NSString;

@interface HMAccessCodeUserInformation : NSObject <HMFObject>
{
    NSString *_simpleLabel;	// 8 = 0x8
    HMUser *_user;	// 16 = 0x10
    HMRemovedUserInfo *_removedUserInfo;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0000000000261af0
+ (id)userInformationWithValue:(id)arg1 home:(id)arg2;	// IMP=0x00000000002619b2
- (void).cxx_destruct;	// IMP=0x000000000026197f
@property(readonly, copy) HMRemovedUserInfo *removedUserInfo; // @synthesize removedUserInfo=_removedUserInfo;
@property(readonly) HMUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *simpleLabel; // @synthesize simpleLabel=_simpleLabel;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)createAccessCodeUserInformationValue;	// IMP=0x0000000000261686
- (id)initWithSimpleLabel:(id)arg1 user:(id)arg2 removedUserInfo:(id)arg3;	// IMP=0x00000000002615c2
- (id)initWithRemovedUserInfo:(id)arg1;	// IMP=0x00000000002615a9
- (id)initWithUser:(id)arg1;	// IMP=0x000000000026158f
- (id)initWithSimpleLabel:(id)arg1;	// IMP=0x0000000000261578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
