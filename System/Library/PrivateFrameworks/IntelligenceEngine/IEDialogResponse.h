//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface IEDialogResponse
{
    NSString *_text;	// 8 = 0x8
    NSString *_catId;	// 16 = 0x10
    NSDictionary *_catParameters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000749cb
@property(retain, nonatomic) NSDictionary *catParameters; // @synthesize catParameters=_catParameters;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end

