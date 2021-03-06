//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject
{
    CDDXPCConnection *_connection;	// 8 = 0x8
    CDDebug *_debug;	// 16 = 0x10
    unsigned long long _clientId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000009e6d
@property(readonly) unsigned long long clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) CDDXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)getLocalAppBundleId:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009d7d
- (_Bool)requestAdmissionLogFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009caa
- (_Bool)setActiveBundles:(id)arg1 startTimestamps:(id)arg2 endTimestamps:(id)arg3 event:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000009ca2
- (_Bool)setNonAppBundlId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009af6
- (_Bool)bundleIdChange:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009a38
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 cost:(long long)arg7 onDate:(id)arg8 risingEdge:(_Bool)arg9 fallingEdge:(_Bool)arg10 error:(id *)arg11 replyHandler:(CDUnknownBlockType)arg12;	// IMP=0x0000000000009187
- (_Bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(_Bool)arg8 fallingEdge:(_Bool)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;	// IMP=0x0000000000009127
- (_Bool)readRemoteRequestResult:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009054
- (_Bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 statistic:(int)arg4 historyWindow:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000008d79
- (_Bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000008d44
- (_Bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 value:(id)arg4 historyWindow:(id)arg5 format:(long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000000897d
- (_Bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000000893f
- (_Bool)requestSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000886c
- (_Bool)resetAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000872e
- (_Bool)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000086ff
- (_Bool)setAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000085c1
- (_Bool)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008592
- (_Bool)broadcastSystemDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000084d4
- (_Bool)readSystemDataFromDevice:(unsigned int)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008401
- (_Bool)getDeviceFromDescription:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000820e
- (_Bool)getDevicesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008150
- (_Bool)resetAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 type:(int)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008012
- (_Bool)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007fe3
- (_Bool)remoteFocalAppWithId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007f10
- (_Bool)budgetsForAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007ded
- (_Bool)budgetsForAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007ddb
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 historyOfValue:(id)arg3 forWindow:(id)arg4 filter:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000007a11
- (_Bool)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000079d0
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 meteredWithValue:(id)arg3 costDictionary:(id)arg4 onDate:(id)arg5 risingEdge:(_Bool)arg6 fallingEdge:(_Bool)arg7 type:(int)arg8 meterToken:(unsigned long long)arg9 error:(id *)arg10 replyHandler:(CDUnknownBlockType)arg11;	// IMP=0x00000000000074cf
- (_Bool)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(_Bool)arg5 fallingEdge:(_Bool)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;	// IMP=0x000000000000746d
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 deviceIdentifier:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000007166
- (_Bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000712e
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000006e69
- (_Bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006e3e
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 statistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000006b79
- (_Bool)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006b4e
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000000062ef
- (_Bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000062ae
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 setCategory:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000616f
- (_Bool)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006140
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 associateToBudgetId:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006001
- (_Bool)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005fd2
- (_Bool)deleteDataWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005f5c
- (_Bool)poolNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ee6
- (_Bool)attributeNamesWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005e70
- (_Bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 occurredWithValue:(id)arg3 cost:(long long)arg4 onDate:(id)arg5 risingEdge:(_Bool)arg6 fallingEdge:(_Bool)arg7 type:(int)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;	// IMP=0x0000000000005bf8
- (_Bool)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(_Bool)arg5 fallingEdge:(_Bool)arg6 type:(int)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;	// IMP=0x0000000000005ba1
- (_Bool)attributeId:(unsigned long long)arg1 backgroundLaunch:(id)arg2 risingEdge:(_Bool)arg3 fallingEdge:(_Bool)arg4 type:(int)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000000595c
- (_Bool)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005858
- (_Bool)idForAttribute:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005824
- (_Bool)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000056a4
- (_Bool)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000551f
- (_Bool)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000548d
- (_Bool)setDebugBitmap:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005459
- (_Bool)deleteAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005332
- (_Bool)deleteAttributeId:(unsigned long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005313
- (_Bool)deleteBundleId:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000052df
- (_Bool)bundleIdEntriesOlderThanDate:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000524d
- (_Bool)deregisterTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005219
- (_Bool)registerTrendableApp:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000051e5
- (_Bool)readLiveAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000051c8
- (_Bool)readTrendingAppsWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000051ab
- (_Bool)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000515e
- (_Bool)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005111
- (_Bool)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000004ff5
- (_Bool)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004fc1
- (_Bool)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id *)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004f82
- (_Bool)idForPool:(id)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004f4e
- (_Bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000004f2d
- (_Bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 maxFraction:(double)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000004dba
- (_Bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004d99
- (_Bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 error:(id *)arg5 replyHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000004c43
- (_Bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 deviceIdentifier:(id)arg6 temporalLeeway:(double)arg7 limitCount:(unsigned long long)arg8 error:(id *)arg9 replyHandler:(CDUnknownBlockType)arg10;	// IMP=0x0000000000004815
- (_Bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000000047d4
- (_Bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 limitCount:(unsigned long long)arg6 error:(id *)arg7 replyHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000000440b
- (_Bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000000043ca
- (_Bool)message:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000433f
- (_Bool)versionWithError:(id *)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004325
- (id)initWithClientId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000004221
- (id)init;	// IMP=0x000000000000420b
- (_Bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000000407f
- (_Bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000003f2f
- (_Bool)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003e1c
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id *)arg8 replyHandler:(CDUnknownBlockType)arg9;	// IMP=0x0000000000003c65
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000003af3
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id *)arg6 replyHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000000396d
- (_Bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id *)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000003825
- (_Bool)sendMessageWithType:(long long)arg1 error:(id *)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003766

@end

