//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionStitchingNode-Protocol.h>

@class NSArray, NSString;

@interface MTLFunctionStitchingFunctionNode : NSObject <MTLFunctionStitchingNode>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_arguments;	// 16 = 0x10
    NSArray *_controlDependencies;	// 24 = 0x18
}

@property(copy, nonatomic) NSArray *controlDependencies; // @synthesize controlDependencies=_controlDependencies;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000096a87
- (void)dealloc;	// IMP=0x0000000000096a36
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000968b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009684e
- (id)initWithName:(id)arg1 arguments:(id)arg2 controlDependencies:(id)arg3;	// IMP=0x00000000000967c7
- (id)init;	// IMP=0x0000000000096779

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
