//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Exchange, NSString, NSURL, StockChartData, StockDataSource;

@interface Stock : NSObject
{
    StockChartData *_chartDataArray[9];	// 8 = 0x8
    _Bool _transient;	// 80 = 0x50
    unsigned int _pricePrecision;	// 84 = 0x54
    NSString *_symbol;	// 88 = 0x58
    NSString *_companyName;	// 96 = 0x60
    NSString *_shortCompanyName;	// 104 = 0x68
    Exchange *_exchange;	// 112 = 0x70
    NSString *_price;	// 120 = 0x78
    NSString *_change;	// 128 = 0x80
    NSString *_currency;	// 136 = 0x88
    NSString *_symbolType;	// 144 = 0x90
    NSString *_open;	// 152 = 0x98
    NSString *_high;	// 160 = 0xa0
    NSString *_low;	// 168 = 0xa8
    NSString *_yearHigh;	// 176 = 0xb0
    NSString *_yearLow;	// 184 = 0xb8
    NSString *_volume;	// 192 = 0xc0
    NSString *_averageVolume;	// 200 = 0xc8
    NSString *_marketcap;	// 208 = 0xd0
    NSString *_peRatio;	// 216 = 0xd8
    NSString *_dividendYield;	// 224 = 0xe0
    NSURL *_infoURL;	// 232 = 0xe8
    StockDataSource *_dataSource;	// 240 = 0xf0
    double _timeQuoteLastUpdated;	// 248 = 0xf8
    double _timeMetadataLastUpdated;	// 256 = 0x100
}

+ (id)_potentiallyAbsentKeys;	// IMP=0x000000000000592d
+ (id)listNameOverridesBySymbol;	// IMP=0x0000000000004ce8
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;	// IMP=0x0000000000003a01
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;	// IMP=0x000000000000381b
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int *)arg2;	// IMP=0x00000000000035a9
+ (id)BlankValueString;	// IMP=0x000000000000354e
+ (id)symbolForURL:(id)arg1;	// IMP=0x00000000000034ed
+ (id)urlForStock:(id)arg1;	// IMP=0x000000000000348b
+ (id)urlForStockSymbol:(id)arg1;	// IMP=0x00000000000033a7
- (void).cxx_destruct;	// IMP=0x0000000000006090
@property(nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) double timeMetadataLastUpdated; // @synthesize timeMetadataLastUpdated=_timeMetadataLastUpdated;
@property(nonatomic) double timeQuoteLastUpdated; // @synthesize timeQuoteLastUpdated=_timeQuoteLastUpdated;
@property(retain, nonatomic) StockDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(readonly, nonatomic) unsigned int pricePrecision; // @synthesize pricePrecision=_pricePrecision;
@property(retain, nonatomic) NSString *dividendYield; // @synthesize dividendYield=_dividendYield;
@property(retain, nonatomic) NSString *peRatio; // @synthesize peRatio=_peRatio;
@property(retain, nonatomic) NSString *marketcap; // @synthesize marketcap=_marketcap;
@property(retain, nonatomic) NSString *averageVolume; // @synthesize averageVolume=_averageVolume;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSString *yearLow; // @synthesize yearLow=_yearLow;
@property(retain, nonatomic) NSString *yearHigh; // @synthesize yearHigh=_yearHigh;
@property(retain, nonatomic) NSString *low; // @synthesize low=_low;
@property(retain, nonatomic) NSString *high; // @synthesize high=_high;
@property(retain, nonatomic) NSString *open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *symbolType; // @synthesize symbolType=_symbolType;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *change; // @synthesize change=_change;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) Exchange *exchange; // @synthesize exchange=_exchange;
@property(retain, nonatomic) NSString *shortCompanyName; // @synthesize shortCompanyName=_shortCompanyName;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(unsigned long long)arg1;	// IMP=0x0000000000005d53
- (id)formattedChangePercent:(_Bool)arg1;	// IMP=0x0000000000005d21
@property(readonly, nonatomic) NSString *formattedChangePercent;
@property(readonly, nonatomic) NSString *formattedChange;
@property(readonly, nonatomic) NSString *formattedPrice;
@property(readonly, nonatomic) NSString *marketStatusDescription;
- (void)_updatePricePrecision;	// IMP=0x00000000000059e9
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000000528c
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000004f20
- (void)setChartData:(id)arg1 forInterval:(long long)arg2;	// IMP=0x0000000000004e62
- (id)chartDataForInterval:(long long)arg1;	// IMP=0x0000000000004dae
- (_Bool)shouldUseCompanyNameAsListName:(unsigned long long)arg1;	// IMP=0x0000000000004d38
- (id)listNameOverride;	// IMP=0x0000000000004c80
- (id)listNameWithMaxIndexNameLength:(unsigned long long)arg1;	// IMP=0x0000000000004bed
- (id)listName;	// IMP=0x0000000000004bd6
- (_Bool)doesMetadataNeedUpdate;	// IMP=0x0000000000004b7a
- (_Bool)doesQuoteNeedUpdate;	// IMP=0x0000000000004b1e
- (_Bool)isMetadataStale;	// IMP=0x0000000000004aca
- (_Bool)isQuoteStale;	// IMP=0x0000000000004a76
- (double)_updateInterval;	// IMP=0x0000000000004a23
- (_Bool)marketIsOpen;	// IMP=0x0000000000004a0d
- (_Bool)isIndex;	// IMP=0x00000000000049ed
- (_Bool)changeIsZero;	// IMP=0x0000000000004930
- (_Bool)changeIsNegative;	// IMP=0x00000000000048a6
- (unsigned long long)hash;	// IMP=0x0000000000004862
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000047b4
- (id)archiveDictionary;	// IMP=0x0000000000004358
- (void)dealloc;	// IMP=0x00000000000042f4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000004223
- (void)populateFromDictionary:(id)arg1;	// IMP=0x0000000000003ab7
- (id)description;	// IMP=0x0000000000003a18

@end

