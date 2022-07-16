//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTableColumnAlignment-Protocol.h>

@class NSData, NSString;

@interface _SFPBTableColumnAlignment : PBCodable <_SFPBTableColumnAlignment, NSSecureCoding>
{
    _Bool _isEqualWidth;	// 8 = 0x8
    int _columnAlignment;	// 12 = 0xc
    int _dataAlignment;	// 16 = 0x10
}

@property(nonatomic) _Bool isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) int dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) int columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001218e5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000121827
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001215da
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001214c0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000121431
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000121424
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000018806d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
