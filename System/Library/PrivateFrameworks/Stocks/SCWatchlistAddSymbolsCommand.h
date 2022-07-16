//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSArray, NSString;

@interface SCWatchlistAddSymbolsCommand : NSObject <SCKZoneCommand>
{
    NSArray *_symbols;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000271dc
- (void).cxx_destruct;	// IMP=0x00000000000271ee
@property(readonly, copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027163
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002706f
- (void)executeWithZone:(id)arg1;	// IMP=0x0000000000026e91
- (id)initWithSymbols:(id)arg1;	// IMP=0x0000000000026e1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

