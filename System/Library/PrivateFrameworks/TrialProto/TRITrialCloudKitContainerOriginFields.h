//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@interface TRITrialCloudKitContainerOriginFields : PBCodable <NSCopying>
{
    int _ckContainer;	// 8 = 0x8
    int _ckEnvironment;	// 12 = 0xc
    struct {
        unsigned int ckContainer:1;
        unsigned int ckEnvironment:1;
    } _has;	// 16 = 0x10
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000087d3
- (unsigned long long)hash;	// IMP=0x000000000000878d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000086da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000865d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000008603
- (void)writeTo:(id)arg1;	// IMP=0x0000000000008592
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000008585
- (id)dictionaryRepresentation;	// IMP=0x000000000000817e
- (id)description;	// IMP=0x00000000000080cf
- (int)StringAsCkContainer:(id)arg1;	// IMP=0x000000000000803d
- (id)ckContainerAsString:(int)arg1;	// IMP=0x0000000000007fd7
@property(nonatomic) _Bool hasCkContainer;
@property(nonatomic) int ckContainer; // @synthesize ckContainer=_ckContainer;
- (int)StringAsCkEnvironment:(id)arg1;	// IMP=0x0000000000007ea8
- (id)ckEnvironmentAsString:(int)arg1;	// IMP=0x0000000000007e1c
@property(nonatomic) _Bool hasCkEnvironment;
@property(nonatomic) int ckEnvironment; // @synthesize ckEnvironment=_ckEnvironment;

@end

