//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFIndexState-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface SFIndexState : NSObject <SFIndexState, NSSecureCoding, NSCopying>
{
    NSNumber *_percentMessagesIndexed;	// 8 = 0x8
    NSNumber *_percentAttachmentsIndexed;	// 16 = 0x10
    NSNumber *_searchIndex;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f285
- (void).cxx_destruct;	// IMP=0x000000000000f578
@property(copy, nonatomic) NSNumber *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(copy, nonatomic) NSNumber *percentAttachmentsIndexed; // @synthesize percentAttachmentsIndexed=_percentAttachmentsIndexed;
@property(copy, nonatomic) NSNumber *percentMessagesIndexed; // @synthesize percentMessagesIndexed=_percentMessagesIndexed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f48e
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f33f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f28d
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000027bc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

