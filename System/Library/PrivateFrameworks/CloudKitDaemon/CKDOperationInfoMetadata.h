//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject
{
    CKOperationInfo *_operationInfo;	// 8 = 0x8
    NSDate *_lastAttemptDate;	// 16 = 0x10
    NSNumber *_retryNumber;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000233e97
@property(retain, nonatomic) NSNumber *retryNumber; // @synthesize retryNumber=_retryNumber;
@property(retain, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(retain, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;

@end

