//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPCAudioAssetTypeSelection : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_explanation;	// 16 = 0x10
    NSDictionary *_justification;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001444bb
@property(copy, nonatomic) NSDictionary *justification; // @synthesize justification=_justification;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

