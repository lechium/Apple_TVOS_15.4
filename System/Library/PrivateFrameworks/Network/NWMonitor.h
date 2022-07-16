//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NSURLSessionTaskDelegate-Protocol.h>

@class NSArray, NSString, NSURL, NSUUID, NWEndpoint, NWInterface, NWNetworkDescription, NWParameters, NWPathEvaluator;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate>
{
    unsigned int _mID;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NWNetworkDescription *_bestAvailableNetworkDescription;	// 24 = 0x18
    NSArray *_networkDescriptionArray;	// 32 = 0x20
    NWEndpoint *_endpoint;	// 40 = 0x28
    NWParameters *_parameters;	// 48 = 0x30
    NWPathEvaluator *_pathEvaluator;	// 56 = 0x38
    NSUUID *_lastProbeUUID;	// 64 = 0x40
    NSURL *_lastProbeURL;	// 72 = 0x48
    NWInterface *_interface;	// 80 = 0x50
}

+ (id)queue;	// IMP=0x0000000000010480
+ (id)mainOperationQueue;	// IMP=0x0000000000010410
+ (id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;	// IMP=0x000000000000f580
+ (id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;	// IMP=0x000000000000f2a0
+ (void)saveMonitor:(id)arg1;	// IMP=0x000000000000f200
+ (id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;	// IMP=0x000000000000efe0
+ (void)initialize;	// IMP=0x000000000000ef60
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000000eec0
- (void).cxx_destruct;	// IMP=0x0000000000011310
@property unsigned int mID; // @synthesize mID=_mID;
@property(retain) NWInterface *interface; // @synthesize interface=_interface;
@property(retain) NSURL *lastProbeURL; // @synthesize lastProbeURL=_lastProbeURL;
@property(retain) NSUUID *lastProbeUUID; // @synthesize lastProbeUUID=_lastProbeUUID;
@property(retain) NWPathEvaluator *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NSArray *networkDescriptionArray; // @synthesize networkDescriptionArray=_networkDescriptionArray;
@property(retain) NWNetworkDescription *bestAvailableNetworkDescription; // @synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription;
@property long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *privateDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x0000000000010ec0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010cf0
- (_Bool)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;	// IMP=0x0000000000010ab0
- (void)dealloc;	// IMP=0x0000000000010a30
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000010900
- (void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(_Bool)arg3;	// IMP=0x0000000000010830
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000105b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

