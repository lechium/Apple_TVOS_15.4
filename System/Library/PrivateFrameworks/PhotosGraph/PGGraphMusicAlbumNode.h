//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PGGraphMusicAlbumNode
{
    NSString *_title;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000260443
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned short)domain;	// IMP=0x0000000000260427
- (id)label;	// IMP=0x0000000000260408
- (id)description;	// IMP=0x00000000002603d8
- (id)propertyDictionary;	// IMP=0x000000000026035e
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000002602bb
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000026025e
- (id)initWithTitle:(id)arg1;	// IMP=0x00000000002601f0

@end
