//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLocale;

@interface WFHourlyForecastRequest
{
    NSLocale *_locale;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003b889
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)startWithService:(id)arg1;	// IMP=0x000000000003b7b0
- (id)description;	// IMP=0x000000000003b728
- (id)initWithLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b631

@end
