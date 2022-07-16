//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatToken-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenNumberData, GEOServerFormatTokenPriceValue, GEOServerFormatTokenUrlValue, GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject <GEOServerFormatToken>
{
    _Bool _shouldScaleUnits;	// 8 = 0x8
    unsigned int _value1;	// 12 = 0xc
    unsigned int _value2;	// 16 = 0x10
    float _percentageValue;	// 20 = 0x14
    long long _type;	// 24 = 0x18
    NSString *_token;	// 32 = 0x20
    NSArray *_value3s;	// 40 = 0x28
    NSString *_stringValue;	// 48 = 0x30
    NSString *_accessibilityLabel;	// 56 = 0x38
    id <GEOServerFormatTokenPriceValue> _priceValue;	// 64 = 0x40
    id <GEOTransitArtworkDataSource> _artworkValue;	// 72 = 0x48
    NSArray *_timeStampValues;	// 80 = 0x50
    id <GEOServerFormatTokenCountdownValue> _countdownValue;	// 88 = 0x58
    id <GEOServerFormatTokenUrlValue> _urlValue;	// 96 = 0x60
    id <GEOServerFormatTokenManeuverValue> _maneuverValue;	// 104 = 0x68
    id <GEOServerFormatTokenNumberData> _numberData;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000171b7
@property(retain, nonatomic) id <GEOServerFormatTokenNumberData> numberData; // @synthesize numberData=_numberData;
@property(retain, nonatomic) id <GEOServerFormatTokenManeuverValue> maneuverValue; // @synthesize maneuverValue=_maneuverValue;
@property(retain, nonatomic) id <GEOServerFormatTokenUrlValue> urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) id <GEOServerFormatTokenCountdownValue> countdownValue; // @synthesize countdownValue=_countdownValue;
@property(retain, nonatomic) NSArray *timeStampValues; // @synthesize timeStampValues=_timeStampValues;
@property(retain, nonatomic) id <GEOTransitArtworkDataSource> artworkValue; // @synthesize artworkValue=_artworkValue;
@property(retain, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue; // @synthesize priceValue=_priceValue;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) _Bool shouldScaleUnits; // @synthesize shouldScaleUnits=_shouldScaleUnits;
@property(nonatomic) float percentageValue; // @synthesize percentageValue=_percentageValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSArray *value3s; // @synthesize value3s=_value3s;
@property(nonatomic) unsigned int value2; // @synthesize value2=_value2;
@property(nonatomic) unsigned int value1; // @synthesize value1=_value1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithToken:(id)arg1;	// IMP=0x0000000000016e46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016cc3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016905

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

