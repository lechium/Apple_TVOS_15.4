//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <ParsecModel/NSFetchRequestResult-Protocol.h>

@class NSDate;

@interface PARSafariPropensity : NSManagedObject <NSFetchRequestResult>
{
}

- (void).cxx_destruct;	// IMP=0x000000000000233a
- (void).cxx_construct;	// IMP=0x0000000000002331
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000022e5

// Remaining properties
@property(nonatomic) short goToSite; // @dynamic goToSite;
@property(nonatomic) short localGoto; // @dynamic localGoto;
@property(nonatomic) short localTap; // @dynamic localTap;
@property(nonatomic) short other; // @dynamic other;
@property(nonatomic) short parsecAppStore; // @dynamic parsecAppStore;
@property(nonatomic) short parsecGoto; // @dynamic parsecGoto;
@property(nonatomic) short parsecMaps; // @dynamic parsecMaps;
@property(nonatomic) short parsecNews; // @dynamic parsecNews;
@property(nonatomic) short parsecOther; // @dynamic parsecOther;
@property(nonatomic) short parsecStocks; // @dynamic parsecStocks;
@property(nonatomic) short parsecTap; // @dynamic parsecTap;
@property(nonatomic) short parsecWeather; // @dynamic parsecWeather;
@property(nonatomic) short parsecWeb; // @dynamic parsecWeb;
@property(nonatomic) short parsecWiki; // @dynamic parsecWiki;
@property(nonatomic) short thirdPartyCompletionOrRecentSearch; // @dynamic thirdPartyCompletionOrRecentSearch;
@property(nonatomic) short thirdPartyGoto; // @dynamic thirdPartyGoto;
@property(nonatomic) short thirdPartyTap; // @dynamic thirdPartyTap;
@property(nonatomic, copy) NSDate *timestamp; // @dynamic timestamp;

@end

