//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>

@interface IXAppRemovabilityMetadata : NSObject <NSCopying>
{
    unsigned long long _removability;	// 8 = 0x8
    unsigned long long _client;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long removability; // @synthesize removability=_removability;
- (unsigned long long)hash;	// IMP=0x000000000002227f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000221a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002213d
- (id)dictionaryRepresentation;	// IMP=0x000000000002202b
- (id)initWithMetadataDictionary:(id)arg1;	// IMP=0x0000000000021e8e
- (id)initWithRemovability:(unsigned long long)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000021e46

@end

