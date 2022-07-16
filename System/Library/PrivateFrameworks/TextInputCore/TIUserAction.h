//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class TIDocumentState, TIKeyboardState;

@interface TIUserAction : NSObject <NSSecureCoding>
{
    int _actionType;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    double _occurenceTime;	// 32 = 0x20
    TIDocumentState *_documentState;	// 40 = 0x28
    TIKeyboardState *_keyboardState;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019c33a
- (void).cxx_destruct;	// IMP=0x000000000019c312
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) double occurenceTime; // @synthesize occurenceTime=_occurenceTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x000000000019c1fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019c128
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019bfed
- (id)initWithTIKeyboardState:(id)arg1;	// IMP=0x000000000019bf74

@end

