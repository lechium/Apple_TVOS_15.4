//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CopresenceCore/NSCopying-Protocol.h>

@class NSString;

@interface CPMessagingConversationActivityContext : PBCodable <NSCopying>
{
    NSString *_actionDescription;	// 8 = 0x8
    NSString *_completedDescription;	// 16 = 0x10
    NSString *_contextIdentifier;	// 24 = 0x18
    NSString *_ongoingDescription;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026c35
@property(retain, nonatomic) NSString *completedDescription; // @synthesize completedDescription=_completedDescription;
@property(retain, nonatomic) NSString *ongoingDescription; // @synthesize ongoingDescription=_ongoingDescription;
@property(retain, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(retain, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000026afe
- (unsigned long long)hash;	// IMP=0x0000000000026a7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002694e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026864
- (void)copyTo:(id)arg1;	// IMP=0x00000000000267c1
- (void)writeTo:(id)arg1;	// IMP=0x000000000002672a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002671d
- (id)dictionaryRepresentation;	// IMP=0x00000000000264c5
- (id)description;	// IMP=0x0000000000026416
@property(readonly, nonatomic) _Bool hasCompletedDescription;
@property(readonly, nonatomic) _Bool hasOngoingDescription;
@property(readonly, nonatomic) _Bool hasActionDescription;
@property(readonly, nonatomic) _Bool hasContextIdentifier;

@end

