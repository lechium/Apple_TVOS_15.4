//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SFAutoFillOneTimeCode;

@interface TOTPGeneratorSnapshot : NSObject
{
    NSDate *_startDateOfInterval;	// 8 = 0x8
    SFAutoFillOneTimeCode *_oneTimeCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008056
@property(retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode; // @synthesize oneTimeCode=_oneTimeCode;
@property(retain, nonatomic) NSDate *startDateOfInterval; // @synthesize startDateOfInterval=_startDateOfInterval;

@end
