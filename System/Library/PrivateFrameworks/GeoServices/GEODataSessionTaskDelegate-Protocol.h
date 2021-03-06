//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEODataRequest;
@protocol GEODataSession, GEODataSessionTask;

@protocol GEODataSessionTaskDelegate <NSObject>
- (void)dataSession:(id <GEODataSession>)arg1 didCompleteTask:(id <GEODataSessionTask>)arg2;

@optional
- (void)dataSession:(id <GEODataSession>)arg1 shouldConvertDataTask:(id <GEODataSessionTask>)arg2 toDownloadTaskForEstimatedResponseSize:(unsigned long long)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)dataSession:(id <GEODataSession>)arg1 didCompleteSubtask:(id <GEODataSessionTask>)arg2 completion:(void (^)(void))arg3;
- (void)dataSession:(id <GEODataSession>)arg1 willSendRequest:(GEODataRequest *)arg2 forTask:(id <GEODataSessionTask>)arg3 completionHandler:(void (^)(GEODataRequest *))arg4;
@end

