//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IFColor;
@protocol ISCompositorResource;

__attribute__((visibility("hidden")))
@interface ISContentLayer
{
    _Bool _acceptSymbol;	// 104 = 0x68
    IFColor *_backgroundColor;	// 112 = 0x70
    id <ISCompositorResource> _content;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001e010
@property(nonatomic) _Bool acceptSymbol; // @synthesize acceptSymbol=_acceptSymbol;
@property(retain, nonatomic) id <ISCompositorResource> content; // @synthesize content=_content;
@property(retain, nonatomic) IFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)init;	// IMP=0x000000000001df28

@end

