//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSString;

@interface TVPlaybackDateController : NSObject
{
    unsigned long long _dateStyle;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_localizedString;	// 24 = 0x18
    NSDateFormatter *_dateFormatter;	// 32 = 0x20
    id _localeDidChangeObserver;	// 40 = 0x28
    id _timeZoneDidChangeObserver;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000045490
@property(nonatomic) __weak id timeZoneDidChangeObserver; // @synthesize timeZoneDidChangeObserver=_timeZoneDidChangeObserver;
@property(nonatomic) __weak id localeDidChangeObserver; // @synthesize localeDidChangeObserver=_localeDidChangeObserver;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *localizedString; // @synthesize localizedString=_localizedString;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
- (void)_updateLocalizedString;	// IMP=0x0000000000045138
- (void)_removeObservers;	// IMP=0x000000000004508b
- (void)_addObserversWithDateFormatter:(id)arg1;	// IMP=0x0000000000044d66
- (void)_configureDateFormatter:(id)arg1 forDateStyle:(unsigned long long)arg2;	// IMP=0x0000000000044d03
- (void)dealloc;	// IMP=0x0000000000044cc5
- (id)init;	// IMP=0x0000000000044bb1

@end

