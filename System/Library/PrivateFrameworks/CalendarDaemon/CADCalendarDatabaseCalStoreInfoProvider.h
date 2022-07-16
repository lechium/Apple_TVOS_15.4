//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADCalStoreInfoProvider-Protocol.h>

@protocol CADDatabaseProvider;

__attribute__((visibility("hidden")))
@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider>
{
    id <CADDatabaseProvider> _databaseProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004c568
@property(readonly, nonatomic) __weak id <CADDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (id)storeInfoList;	// IMP=0x000000000004c307
- (id)initWithDatabaseProvider:(id)arg1;	// IMP=0x000000000004c2a3

@end

