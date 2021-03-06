//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionStitchingNode-Protocol.h>

@class NSString;

@interface MTLFunctionStitchingInputNode : NSObject <MTLFunctionStitchingNode>
{
    unsigned long long _argumentIndex;	// 8 = 0x8
}

@property(nonatomic) unsigned long long argumentIndex; // @synthesize argumentIndex=_argumentIndex;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000096641
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000965ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009655f
- (id)initWithArgumentIndex:(unsigned long long)arg1;	// IMP=0x0000000000096527

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

