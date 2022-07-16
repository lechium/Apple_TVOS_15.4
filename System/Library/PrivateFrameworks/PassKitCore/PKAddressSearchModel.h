//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>
#import <PassKitCore/MKLocalSearchCompleterDelegate-Protocol.h>

@class CLGeocoder, CLLocationManager, CNContactStore, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSString;
@protocol OS_dispatch_queue, PKAddressSearchModelDelegate;

@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate>
{
    NSArray *_contactsSearchResults;	// 8 = 0x8
    NSArray *_completionSearchResults;	// 16 = 0x10
    NSArray *_recentsSearchResults;	// 24 = 0x18
    id <PKAddressSearchModelDelegate> _delegate;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    MKLocalSearchCompleter *_completer;	// 48 = 0x30
    CLGeocoder *_geocoder;	// 56 = 0x38
    MKLocalSearch *_localSearch;	// 64 = 0x40
    CNContactStore *_contactStore;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_resultsQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001f8ae0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) MKLocalSearchCompleter *completer; // @synthesize completer=_completer;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <PKAddressSearchModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *recentsSearchResults; // @synthesize recentsSearchResults=_recentsSearchResults;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000000001f890d
- (void)_resetContactsSearchResults;	// IMP=0x00000000001f8907
- (void)_updateRecents:(id)arg1;	// IMP=0x00000000001f8901
- (void)completerDidUpdateResults:(id)arg1;	// IMP=0x00000000001f875a
@property(readonly, nonatomic) NSArray *completionSearchResults;
@property(readonly, nonatomic) NSArray *contactsSearchResults;
- (void)endSearch;	// IMP=0x00000000001f853c
- (void)selectMapSearchCompletion:(id)arg1;	// IMP=0x00000000001f8041
- (void)beginSearch:(id)arg1;	// IMP=0x00000000001f79d0
- (id)init;	// IMP=0x00000000001f789c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

