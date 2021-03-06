//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NMSSHSession;

@interface NMSFTP : NSObject
{
    _Bool _connected;	// 8 = 0x8
    NMSSHSession *_session;	// 16 = 0x10
    struct _LIBSSH2_SFTP *_sftpSession;	// 24 = 0x18
}

+ (id)connectWithSession:(id)arg1;	// IMP=0x00000000003730b8
- (void).cxx_destruct;	// IMP=0x0000000000373093
@property(nonatomic) struct _LIBSSH2_SFTP *sftpSession; // @synthesize sftpSession=_sftpSession;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NMSSHSession *session; // @synthesize session=_session;
- (_Bool)copyContentsOfPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000372d8d
- (_Bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000372bf3
- (_Bool)writeStream:(id)arg1 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg2;	// IMP=0x0000000000372bde
- (_Bool)appendStream:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x0000000000372963
- (_Bool)appendContents:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x00000000003728dd
- (_Bool)writeStream:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000372751
- (_Bool)writeStream:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x000000000037273c
- (_Bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x000000000037269b
- (_Bool)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x0000000000372686
- (_Bool)writeContents:(id)arg1 toFileAtPath:(id)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x00000000003725e5
- (_Bool)writeContents:(id)arg1 toFileAtPath:(id)arg2;	// IMP=0x00000000003725d0
- (id)contentsAtPath:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x000000000037234c
- (id)contentsAtPath:(id)arg1;	// IMP=0x0000000000372338
- (_Bool)removeFileAtPath:(id)arg1;	// IMP=0x000000000037229a
- (_Bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2;	// IMP=0x0000000000372197
- (_Bool)fileExistsAtPath:(id)arg1;	// IMP=0x0000000000372124
- (struct _LIBSSH2_SFTP_HANDLE *)openFileAtPath:(id)arg1 flags:(unsigned long long)arg2 mode:(long long)arg3;	// IMP=0x0000000000371ecc
- (id)infoForFileAtPath:(id)arg1;	// IMP=0x0000000000371dcc
- (id)contentsOfDirectoryAtPath:(id)arg1;	// IMP=0x0000000000371a77
- (_Bool)removeDirectoryAtPath:(id)arg1;	// IMP=0x00000000003719d9
- (_Bool)createDirectoryAtPath:(id)arg1;	// IMP=0x0000000000371936
- (_Bool)directoryExistsAtPath:(id)arg1;	// IMP=0x00000000003718c3
- (struct _LIBSSH2_SFTP_HANDLE *)openDirectoryAtPath:(id)arg1;	// IMP=0x000000000037166d
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000000371567
- (void)disconnect;	// IMP=0x000000000037152f
- (_Bool)connect;	// IMP=0x00000000003713e7
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000371358

@end

