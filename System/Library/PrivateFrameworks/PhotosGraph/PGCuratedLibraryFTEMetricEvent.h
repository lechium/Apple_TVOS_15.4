//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@interface PGCuratedLibraryFTEMetricEvent
{
    long long _librarySizeRange;	// 8 = 0x8
    NSDate *_migrationDate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDictionary *_payload;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b7317
- (id)payload;	// IMP=0x00000000001b71dc
- (id)identifier;	// IMP=0x00000000001b71cf
- (id)initWithLibrarySizeRange:(long long)arg1 migrationDate:(id)arg2;	// IMP=0x00000000001b714f

@end

