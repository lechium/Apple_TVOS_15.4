//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse
{
    NSArray *_artworkOptions;	// 8 = 0x8
    NSArray *_nameOptions;	// 16 = 0x10
    NSArray *_priceOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f133b
@property(readonly, copy, nonatomic) NSArray *priceOptions; // @synthesize priceOptions=_priceOptions;
@property(readonly, copy, nonatomic) NSArray *nameOptions; // @synthesize nameOptions=_nameOptions;
@property(readonly, copy, nonatomic) NSArray *artworkOptions; // @synthesize artworkOptions=_artworkOptions;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001f0fd1

@end
