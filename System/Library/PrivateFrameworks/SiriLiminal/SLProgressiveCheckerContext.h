//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SLProgressiveCheckerContext : NSObject
{
    unsigned long long _audioOption;	// 8 = 0x8
    NSDictionary *_vtei;	// 16 = 0x10
    unsigned long long _invocationType;	// 24 = 0x18
    NSString *_locale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000003c04
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) unsigned long long invocationType; // @synthesize invocationType=_invocationType;
@property(readonly, nonatomic) NSDictionary *vtei; // @synthesize vtei=_vtei;
@property(readonly, nonatomic) unsigned long long audioOption; // @synthesize audioOption=_audioOption;
- (id)initWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003818

@end

