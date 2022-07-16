//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISDecoratedIcon
{
    NSArray *_decorations;	// 16 = 0x10
    ISIcon *_icon;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002023b
- (void).cxx_destruct;	// IMP=0x0000000000020e7f
@property(readonly) ISIcon *icon; // @synthesize icon=_icon;
- (id)symbol;	// IMP=0x0000000000020e4c
- (id)makeResourceProvider;	// IMP=0x00000000000209dd
@property(readonly) NSArray *decorations;
- (id)description;	// IMP=0x000000000002086d
- (id)iconWithDecorations:(id)arg1;	// IMP=0x00000000000207bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000206ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002052f
- (id)initWithIcon:(id)arg1 decorations:(id)arg2;	// IMP=0x0000000000020243

@end

