//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLShareParticipant, NSArray, NSDate, NSURL;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>
{
    long long _publicPermission;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSArray *_participants;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a72fa
+ (void)initialize;	// IMP=0x00000000000a727d
- (void).cxx_destruct;	// IMP=0x00000000000a724a
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
- (unsigned long long)hash;	// IMP=0x00000000000a71a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a709a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a700c
- (id)redactedDescription;	// IMP=0x00000000000a6ffa
- (id)description;	// IMP=0x00000000000a6eb5
@property(readonly, nonatomic) _Bool ownerIsCurrentUser;
@property(readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property(readonly, nonatomic) CPLShareParticipant *owner;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a69f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a68d1
- (id)init;	// IMP=0x00000000000a6895

@end
