//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class KTRequest, NSData, NSSet;

__attribute__((visibility("hidden")))
@interface KTSignedMutationTimestamp : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000000000b8da8

// Remaining properties
@property(retain, nonatomic) NSSet *failures; // @dynamic failures;
@property(nonatomic) long long mutationTime; // @dynamic mutationTime;
@property(nonatomic) double receiptTime; // @dynamic receiptTime;
@property(retain, nonatomic) KTRequest *request; // @dynamic request;
@property(nonatomic) long long signatureVerified; // @dynamic signatureVerified;
@property(retain, nonatomic) NSData *smt; // @dynamic smt;
@property(nonatomic) long long verificationResult; // @dynamic verificationResult;

@end
