//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface InteractionAnalysisPETInteractionEvents : PBCodable <NSCopying>
{
    NSString *_deviceID;	// 8 = 0x8
    NSMutableArray *_interactionEvents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017a0a8
- (unsigned long long)hash;	// IMP=0x000000000017a05b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000179f93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000179dd4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000179c7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000179c72
- (id)dictionaryRepresentation;	// IMP=0x000000000017983a
- (id)description;	// IMP=0x000000000017978b

@end

