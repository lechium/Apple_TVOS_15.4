//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLPersistentHistoryMarkerOverrides-Protocol.h>

@class NSDate, NSString;

@interface PLPersistentHistoryMarkerDate <PLPersistentHistoryMarkerOverrides>
{
    NSDate *_date;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004d83ff
- (id)overrride_shortDescription;	// IMP=0x00000000004d83cf
@property(readonly, copy) NSString *description;
- (id)overrride_changeRequestForFetching;	// IMP=0x00000000004d8378
- (id)initWithDate:(id)arg1;	// IMP=0x00000000004d82e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

