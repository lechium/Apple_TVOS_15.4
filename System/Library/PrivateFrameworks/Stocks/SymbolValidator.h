//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SymbolValidator
{
    NSArray *_symbols;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000128df
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)failWithError:(id)arg1;	// IMP=0x0000000000012825
- (void)didParseData;	// IMP=0x00000000000127de
- (void)parseData:(id)arg1;	// IMP=0x00000000000121fb
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;	// IMP=0x0000000000011e7b
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000011e14

@end

