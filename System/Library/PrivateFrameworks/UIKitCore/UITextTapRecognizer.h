//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface UITextTapRecognizer
{
    NSArray *_touchesForTap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000decddf
@property(retain, nonatomic) NSArray *touchesForTap; // @synthesize touchesForTap=_touchesForTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000decd11
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000decce2
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000decc48

@end

