//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TIDeleteWordEvent
{
    NSMutableArray *_allKeyboardInputsM;	// 56 = 0x38
    NSMutableArray *_allTouchesM;	// 64 = 0x40
    NSMutableArray *_candidatesOfferedM;	// 72 = 0x48
    NSMutableArray *_touchLayoutsM;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019e8d8
- (void).cxx_destruct;	// IMP=0x000000000019e885
@property(retain, nonatomic) NSMutableArray *touchLayoutsM; // @synthesize touchLayoutsM=_touchLayoutsM;
@property(retain, nonatomic) NSMutableArray *candidatesOfferedM; // @synthesize candidatesOfferedM=_candidatesOfferedM;
@property(retain, nonatomic) NSMutableArray *allTouchesM; // @synthesize allTouchesM=_allTouchesM;
@property(retain, nonatomic) NSMutableArray *allKeyboardInputsM; // @synthesize allKeyboardInputsM=_allKeyboardInputsM;
@property(readonly, nonatomic) NSArray *touchLayouts;
@property(readonly, nonatomic) NSArray *candidatesOffered;
@property(readonly, nonatomic) NSArray *allTouches;
@property(readonly, nonatomic) NSArray *allKeyboardInputs;
- (void)addTouches:(id)arg1 withLayoutIDs:(id)arg2;	// IMP=0x000000000019e615
- (void)addCandidatesOffered:(id)arg1;	// IMP=0x000000000019e5a3
- (void)addKeyInputs:(id)arg1;	// IMP=0x000000000019e531
- (void)addKeyInput:(id)arg1;	// IMP=0x000000000019e4bf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019e3ea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019e14e
- (id)initWithTIKeyboardState:(id)arg1;	// IMP=0x000000000019e03f

@end
