//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSDate, NSString, NSURL;

@interface EKVirtualConferenceExtensionContext : NSExtensionContext
{
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x00000000000c1aa3
- (void)completeRequestWithRenewalSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c29fa
- (void)completeRequestWithInvalidationSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2844
- (void)completeRequestWithVirtualConference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2240
- (void)completeRequestWithAvailableRoomTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1eab
@property(readonly, nonatomic) NSDate *renewalDate;
@property(readonly, nonatomic) NSURL *URLForRenewal;
@property(readonly, nonatomic) NSURL *URLForInvalidation;
@property(readonly, nonatomic) NSString *roomTypeIdentifier;
@property(readonly, nonatomic) int requestType;

@end
