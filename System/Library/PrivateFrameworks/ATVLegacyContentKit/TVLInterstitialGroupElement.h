//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TVLXMLElement;

@interface TVLInterstitialGroupElement
{
    NSArray *_interstitials;	// 8 = 0x8
    TVLXMLElement *_xml;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a6d97
@property(readonly, retain, nonatomic) TVLXMLElement *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSArray *interstitials; // @synthesize interstitials=_interstitials;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6c4b
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x00000000000a69f8

@end

