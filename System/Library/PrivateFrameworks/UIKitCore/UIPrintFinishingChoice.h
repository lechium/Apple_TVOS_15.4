//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintFinishingChoice : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _finishingChoiceID;	// 16 = 0x10
    NSDictionary *_finishingChoiceInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000d25df8
@property(retain, nonatomic) NSDictionary *finishingChoiceInfo; // @synthesize finishingChoiceInfo=_finishingChoiceInfo;
@property(nonatomic) long long finishingChoiceID; // @synthesize finishingChoiceID=_finishingChoiceID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 finishingChoiceID:(long long)arg2 finishingChoiceInfo:(id)arg3;	// IMP=0x0000000000d25d09

@end

