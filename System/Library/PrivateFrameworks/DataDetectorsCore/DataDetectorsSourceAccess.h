//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDetectorsCore/DataDetectorsSourceAccessProtocol-Protocol.h>

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol>
{
    CDStruct_4c969caf _auditToken;	// 8 = 0x8
    int _clientpid;	// 40 = 0x28
    unsigned int _clientuid;	// 44 = 0x2c
    _Bool _privacyUserReadEntitled;	// 48 = 0x30
    unsigned char _privacyUserReadEntitlementChecked;	// 49 = 0x31
    _Bool _privacyUserWriteEntitled;	// 50 = 0x32
    unsigned char _privacyUserWriteEntitlementChecked;	// 51 = 0x33
    _Bool _privacySystemWriteEntitled;	// 52 = 0x34
    unsigned char _privacySystemWriteEntitlementChecked;	// 53 = 0x35
}

@property unsigned int userIdentifier; // @synthesize userIdentifier=_clientuid;
@property int processIdentifier; // @synthesize processIdentifier=_clientpid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3;	// IMP=0x00000000000236d2
- (_Bool)clientCanWriteSource:(int)arg1;	// IMP=0x0000000000023693
- (id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2;	// IMP=0x00000000000235a5
- (_Bool)privacySystemWriteEntitled;	// IMP=0x0000000000023426
- (_Bool)privacyUserWriteEntitled;	// IMP=0x00000000000232a7
- (_Bool)privacyUserReadEntitled;	// IMP=0x0000000000023235
- (void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002312c
- (void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022ff8
- (void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022d7a
- (void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022cd6

@end

