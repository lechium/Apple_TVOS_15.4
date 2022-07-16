//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EAROovToken : NSObject
{
    NSString *_orthography;	// 8 = 0x8
    NSSet *_prons;	// 16 = 0x10
    long long _frequency;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004a66b8
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) NSSet *prons; // @synthesize prons=_prons;
@property(readonly, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
- (id)initWithOrthography:(id)arg1 prons:(id)arg2 frequency:(long long)arg3;	// IMP=0x00000000004a65d6

@end

