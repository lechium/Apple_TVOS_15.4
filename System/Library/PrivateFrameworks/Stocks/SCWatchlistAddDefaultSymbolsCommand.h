//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand>
{
    _Bool _deferUpload;	// 8 = 0x8
    NSArray *_symbols;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000288bd
- (void).cxx_destruct;	// IMP=0x00000000000288d8
@property(readonly, nonatomic) _Bool deferUpload; // @synthesize deferUpload=_deferUpload;
@property(readonly, copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028820
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002870e
- (_Bool)shouldDeferUpload;	// IMP=0x00000000000286fc
- (void)executeWithZone:(id)arg1;	// IMP=0x00000000000285ae
- (id)initWithSymbols:(id)arg1 deferUpload:(_Bool)arg2;	// IMP=0x0000000000028530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
