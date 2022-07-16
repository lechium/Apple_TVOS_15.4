//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand>
{
    NSString *_oldSymbol;	// 8 = 0x8
    NSString *_replacementSymbol;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000284ec
- (void).cxx_destruct;	// IMP=0x0000000000028508
@property(readonly, copy, nonatomic) NSString *replacementSymbol; // @synthesize replacementSymbol=_replacementSymbol;
@property(readonly, copy, nonatomic) NSString *oldSymbol; // @synthesize oldSymbol=_oldSymbol;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002843e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002835a
- (void)executeWithZone:(id)arg1;	// IMP=0x0000000000028129
- (id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2;	// IMP=0x0000000000028070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

