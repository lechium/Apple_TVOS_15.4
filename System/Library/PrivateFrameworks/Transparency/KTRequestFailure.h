//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class KTRequest, NSData, NSString;

__attribute__((visibility("hidden")))
@interface KTRequestFailure : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000000000b8d68

// Remaining properties
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(retain, nonatomic) NSData *proofOfFailure; // @dynamic proofOfFailure;
@property(retain, nonatomic) KTRequest *request; // @dynamic request;

@end

