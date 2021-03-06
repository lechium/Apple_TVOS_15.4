//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSRegistration, IDSRegistrationController, NSArray, NSDictionary;

@protocol IDSRegistrationControllerListener
- (void)registrationControllerNeedsNewRegistration:(IDSRegistrationController *)arg1;
- (void)registrationController:(IDSRegistrationController *)arg1 deregistrationWillStart:(IDSRegistration *)arg2;
- (void)registrationController:(IDSRegistrationController *)arg1 allRegistrationsSucceeded:(NSArray *)arg2;
- (void)registrationController:(IDSRegistrationController *)arg1 registrationFailed:(IDSRegistration *)arg2 error:(long long)arg3 info:(NSDictionary *)arg4;
- (void)registrationController:(IDSRegistrationController *)arg1 registrationSucceeded:(IDSRegistration *)arg2;
- (void)registrationController:(IDSRegistrationController *)arg1 registrationUpdated:(IDSRegistration *)arg2;
- (void)registrationController:(IDSRegistrationController *)arg1 registrationWillStart:(IDSRegistration *)arg2;
@end

