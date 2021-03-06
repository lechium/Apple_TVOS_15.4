//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSNumber, NSString;

@interface NSError (PushTypesError)
+ (id)pushTypeRetryableError;	// IMP=0x0010000000105653
+ (id)pushTypeErrorForNoPushTokenRegistered;	// IMP=0x0010000000105633
+ (id)pushTypeErrorForAddingInactiveAccount;	// IMP=0x0010000000105613
+ (id)pushTypeErrorForNoAccount;	// IMP=0x00100000001055f3
+ (id)pushTypeErrorForNoResponse;	// IMP=0x00100000001055d3
+ (id)pushTypeErrorForFailedResponse;	// IMP=0x00100000001055b3
+ (id)pushTypeErrorForFailedRequestCreation;	// IMP=0x0010000000105593
+ (id)pushRegisterErrorForNoAccount;	// IMP=0x0010000000128581
+ (id)pushRegisterErrorForNoResponse;	// IMP=0x0010000000128561
+ (id)pushRegisterErrorForFailedResponse;	// IMP=0x0010000000128541
+ (id)pushRegisterErrorForFailedRequestCreation;	// IMP=0x0010000000128521
- (void)lib_walkUnderlyingErrorsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000195f4e
- (id)lib_addUserInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000195e08
- (id)lib_addRecoveryOptions:(id)arg1;	// IMP=0x0010000000195c88
@property(readonly) NSString *lib_serverDialogID;
@property(readonly) NSString *lib_shortDescription;
@property(readonly) NSString *lib_sanitizedDescription;
@property(readonly) NSNumber *lib_coordinatorOwnerID;
@end

