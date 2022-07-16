//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, RequestLocalizations;

@interface GenericRequest : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_itemIdentifier;	// 24 = 0x18
    RequestLocalizations *_localizations;	// 32 = 0x20
    NSString *_offerName;	// 40 = 0x28
    long long _status;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001cdfa
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;
- (id)compile;	// IMP=0x001000000001cba1
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001c87f
- (id)initWithDate:(id)arg1 identifier:(id)arg2 itemIdentifier:(id)arg3 localizations:(id)arg4 offerName:(id)arg5 status:(long long)arg6;	// IMP=0x001000000001c773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

