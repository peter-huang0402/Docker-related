/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: core.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "core.pb-c.h"
void   task_core_entry__init
                     (TaskCoreEntry         *message)
{
  static TaskCoreEntry init_value = TASK_CORE_ENTRY__INIT;
  *message = init_value;
}
size_t task_core_entry__get_packed_size
                     (const TaskCoreEntry *message)
{
  assert(message->base.descriptor == &task_core_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t task_core_entry__pack
                     (const TaskCoreEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &task_core_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t task_core_entry__pack_to_buffer
                     (const TaskCoreEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &task_core_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TaskCoreEntry *
       task_core_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TaskCoreEntry *)
     protobuf_c_message_unpack (&task_core_entry__descriptor,
                                allocator, len, data);
}
void   task_core_entry__free_unpacked
                     (TaskCoreEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &task_core_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   task_kobj_ids_entry__init
                     (TaskKobjIdsEntry         *message)
{
  static TaskKobjIdsEntry init_value = TASK_KOBJ_IDS_ENTRY__INIT;
  *message = init_value;
}
size_t task_kobj_ids_entry__get_packed_size
                     (const TaskKobjIdsEntry *message)
{
  assert(message->base.descriptor == &task_kobj_ids_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t task_kobj_ids_entry__pack
                     (const TaskKobjIdsEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &task_kobj_ids_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t task_kobj_ids_entry__pack_to_buffer
                     (const TaskKobjIdsEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &task_kobj_ids_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TaskKobjIdsEntry *
       task_kobj_ids_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TaskKobjIdsEntry *)
     protobuf_c_message_unpack (&task_kobj_ids_entry__descriptor,
                                allocator, len, data);
}
void   task_kobj_ids_entry__free_unpacked
                     (TaskKobjIdsEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &task_kobj_ids_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   thread_sas_entry__init
                     (ThreadSasEntry         *message)
{
  static ThreadSasEntry init_value = THREAD_SAS_ENTRY__INIT;
  *message = init_value;
}
size_t thread_sas_entry__get_packed_size
                     (const ThreadSasEntry *message)
{
  assert(message->base.descriptor == &thread_sas_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t thread_sas_entry__pack
                     (const ThreadSasEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &thread_sas_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t thread_sas_entry__pack_to_buffer
                     (const ThreadSasEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &thread_sas_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ThreadSasEntry *
       thread_sas_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ThreadSasEntry *)
     protobuf_c_message_unpack (&thread_sas_entry__descriptor,
                                allocator, len, data);
}
void   thread_sas_entry__free_unpacked
                     (ThreadSasEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &thread_sas_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   thread_core_entry__init
                     (ThreadCoreEntry         *message)
{
  static ThreadCoreEntry init_value = THREAD_CORE_ENTRY__INIT;
  *message = init_value;
}
size_t thread_core_entry__get_packed_size
                     (const ThreadCoreEntry *message)
{
  assert(message->base.descriptor == &thread_core_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t thread_core_entry__pack
                     (const ThreadCoreEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &thread_core_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t thread_core_entry__pack_to_buffer
                     (const ThreadCoreEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &thread_core_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ThreadCoreEntry *
       thread_core_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ThreadCoreEntry *)
     protobuf_c_message_unpack (&thread_core_entry__descriptor,
                                allocator, len, data);
}
void   thread_core_entry__free_unpacked
                     (ThreadCoreEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &thread_core_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   task_rlimits_entry__init
                     (TaskRlimitsEntry         *message)
{
  static TaskRlimitsEntry init_value = TASK_RLIMITS_ENTRY__INIT;
  *message = init_value;
}
size_t task_rlimits_entry__get_packed_size
                     (const TaskRlimitsEntry *message)
{
  assert(message->base.descriptor == &task_rlimits_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t task_rlimits_entry__pack
                     (const TaskRlimitsEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &task_rlimits_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t task_rlimits_entry__pack_to_buffer
                     (const TaskRlimitsEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &task_rlimits_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TaskRlimitsEntry *
       task_rlimits_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TaskRlimitsEntry *)
     protobuf_c_message_unpack (&task_rlimits_entry__descriptor,
                                allocator, len, data);
}
void   task_rlimits_entry__free_unpacked
                     (TaskRlimitsEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &task_rlimits_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   core_entry__init
                     (CoreEntry         *message)
{
  static CoreEntry init_value = CORE_ENTRY__INIT;
  *message = init_value;
}
size_t core_entry__get_packed_size
                     (const CoreEntry *message)
{
  assert(message->base.descriptor == &core_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t core_entry__pack
                     (const CoreEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &core_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t core_entry__pack_to_buffer
                     (const CoreEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &core_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CoreEntry *
       core_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CoreEntry *)
     protobuf_c_message_unpack (&core_entry__descriptor,
                                allocator, len, data);
}
void   core_entry__free_unpacked
                     (CoreEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &core_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor task_core_entry__field_descriptors[14] =
{
  {
    "task_state",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, task_state),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "exit_code",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, exit_code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "personality",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, personality),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flags",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "blk_sigset",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, blk_sigset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "comm",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, comm),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timers",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, timers),
    &task_timers_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimits",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, rlimits),
    &task_rlimits_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cg_set",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskCoreEntry, has_cg_set),
    offsetof(TaskCoreEntry, cg_set),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signals_s",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TaskCoreEntry, signals_s),
    &signal_queue_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seccomp_mode",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(TaskCoreEntry, has_seccomp_mode),
    offsetof(TaskCoreEntry, seccomp_mode),
    &seccomp_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seccomp_filter",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskCoreEntry, has_seccomp_filter),
    offsetof(TaskCoreEntry, seccomp_filter),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "loginuid",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskCoreEntry, has_loginuid),
    offsetof(TaskCoreEntry, loginuid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "oom_score_adj",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(TaskCoreEntry, has_oom_score_adj),
    offsetof(TaskCoreEntry, oom_score_adj),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned task_core_entry__field_indices_by_name[] = {
  4,   /* field[4] = blk_sigset */
  8,   /* field[8] = cg_set */
  5,   /* field[5] = comm */
  1,   /* field[1] = exit_code */
  3,   /* field[3] = flags */
  12,   /* field[12] = loginuid */
  13,   /* field[13] = oom_score_adj */
  2,   /* field[2] = personality */
  7,   /* field[7] = rlimits */
  11,   /* field[11] = seccomp_filter */
  10,   /* field[10] = seccomp_mode */
  9,   /* field[9] = signals_s */
  0,   /* field[0] = task_state */
  6,   /* field[6] = timers */
};
static const ProtobufCIntRange task_core_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 14 }
};
const ProtobufCMessageDescriptor task_core_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "task_core_entry",
  "TaskCoreEntry",
  "TaskCoreEntry",
  "",
  sizeof(TaskCoreEntry),
  14,
  task_core_entry__field_descriptors,
  task_core_entry__field_indices_by_name,
  1,  task_core_entry__number_ranges,
  (ProtobufCMessageInit) task_core_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor task_kobj_ids_entry__field_descriptors[11] =
{
  {
    "vm_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskKobjIdsEntry, vm_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "files_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskKobjIdsEntry, files_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fs_id",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskKobjIdsEntry, fs_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sighand_id",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TaskKobjIdsEntry, sighand_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pid_ns_id",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_pid_ns_id),
    offsetof(TaskKobjIdsEntry, pid_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "net_ns_id",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_net_ns_id),
    offsetof(TaskKobjIdsEntry, net_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ipc_ns_id",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_ipc_ns_id),
    offsetof(TaskKobjIdsEntry, ipc_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uts_ns_id",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_uts_ns_id),
    offsetof(TaskKobjIdsEntry, uts_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mnt_ns_id",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_mnt_ns_id),
    offsetof(TaskKobjIdsEntry, mnt_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user_ns_id",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_user_ns_id),
    offsetof(TaskKobjIdsEntry, user_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_ns_id",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TaskKobjIdsEntry, has_cgroup_ns_id),
    offsetof(TaskKobjIdsEntry, cgroup_ns_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned task_kobj_ids_entry__field_indices_by_name[] = {
  10,   /* field[10] = cgroup_ns_id */
  1,   /* field[1] = files_id */
  2,   /* field[2] = fs_id */
  6,   /* field[6] = ipc_ns_id */
  8,   /* field[8] = mnt_ns_id */
  5,   /* field[5] = net_ns_id */
  4,   /* field[4] = pid_ns_id */
  3,   /* field[3] = sighand_id */
  9,   /* field[9] = user_ns_id */
  7,   /* field[7] = uts_ns_id */
  0,   /* field[0] = vm_id */
};
static const ProtobufCIntRange task_kobj_ids_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 11 }
};
const ProtobufCMessageDescriptor task_kobj_ids_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "task_kobj_ids_entry",
  "TaskKobjIdsEntry",
  "TaskKobjIdsEntry",
  "",
  sizeof(TaskKobjIdsEntry),
  11,
  task_kobj_ids_entry__field_descriptors,
  task_kobj_ids_entry__field_indices_by_name,
  1,  task_kobj_ids_entry__number_ranges,
  (ProtobufCMessageInit) task_kobj_ids_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor thread_sas_entry__field_descriptors[3] =
{
  {
    "ss_sp",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(ThreadSasEntry, ss_sp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ss_size",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(ThreadSasEntry, ss_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ss_flags",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(ThreadSasEntry, ss_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned thread_sas_entry__field_indices_by_name[] = {
  2,   /* field[2] = ss_flags */
  1,   /* field[1] = ss_size */
  0,   /* field[0] = ss_sp */
};
static const ProtobufCIntRange thread_sas_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor thread_sas_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "thread_sas_entry",
  "ThreadSasEntry",
  "ThreadSasEntry",
  "",
  sizeof(ThreadSasEntry),
  3,
  thread_sas_entry__field_descriptors,
  thread_sas_entry__field_indices_by_name,
  1,  thread_sas_entry__number_ranges,
  (ProtobufCMessageInit) thread_sas_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor thread_core_entry__field_descriptors[10] =
{
  {
    "futex_rla",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(ThreadCoreEntry, futex_rla),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "futex_rla_len",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(ThreadCoreEntry, futex_rla_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sched_nice",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    offsetof(ThreadCoreEntry, has_sched_nice),
    offsetof(ThreadCoreEntry, sched_nice),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sched_policy",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ThreadCoreEntry, has_sched_policy),
    offsetof(ThreadCoreEntry, sched_policy),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sched_prio",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ThreadCoreEntry, has_sched_prio),
    offsetof(ThreadCoreEntry, sched_prio),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "blk_sigset",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(ThreadCoreEntry, has_blk_sigset),
    offsetof(ThreadCoreEntry, blk_sigset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sas",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ThreadCoreEntry, sas),
    &thread_sas_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pdeath_sig",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ThreadCoreEntry, has_pdeath_sig),
    offsetof(ThreadCoreEntry, pdeath_sig),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signals_p",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ThreadCoreEntry, signals_p),
    &signal_queue_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "creds",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ThreadCoreEntry, creds),
    &creds_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned thread_core_entry__field_indices_by_name[] = {
  5,   /* field[5] = blk_sigset */
  9,   /* field[9] = creds */
  0,   /* field[0] = futex_rla */
  1,   /* field[1] = futex_rla_len */
  7,   /* field[7] = pdeath_sig */
  6,   /* field[6] = sas */
  2,   /* field[2] = sched_nice */
  3,   /* field[3] = sched_policy */
  4,   /* field[4] = sched_prio */
  8,   /* field[8] = signals_p */
};
static const ProtobufCIntRange thread_core_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor thread_core_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "thread_core_entry",
  "ThreadCoreEntry",
  "ThreadCoreEntry",
  "",
  sizeof(ThreadCoreEntry),
  10,
  thread_core_entry__field_descriptors,
  thread_core_entry__field_indices_by_name,
  1,  thread_core_entry__number_ranges,
  (ProtobufCMessageInit) thread_core_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor task_rlimits_entry__field_descriptors[1] =
{
  {
    "rlimits",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(TaskRlimitsEntry, n_rlimits),
    offsetof(TaskRlimitsEntry, rlimits),
    &rlimit_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned task_rlimits_entry__field_indices_by_name[] = {
  0,   /* field[0] = rlimits */
};
static const ProtobufCIntRange task_rlimits_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor task_rlimits_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "task_rlimits_entry",
  "TaskRlimitsEntry",
  "TaskRlimitsEntry",
  "",
  sizeof(TaskRlimitsEntry),
  1,
  task_rlimits_entry__field_descriptors,
  task_rlimits_entry__field_indices_by_name,
  1,  task_rlimits_entry__number_ranges,
  (ProtobufCMessageInit) task_rlimits_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue core_entry__march__enum_values_by_number[5] =
{
  { "UNKNOWN", "CORE_ENTRY__MARCH__UNKNOWN", 0 },
  { "X86_64", "CORE_ENTRY__MARCH__X86_64", 1 },
  { "ARM", "CORE_ENTRY__MARCH__ARM", 2 },
  { "AARCH64", "CORE_ENTRY__MARCH__AARCH64", 3 },
  { "PPC64", "CORE_ENTRY__MARCH__PPC64", 4 },
};
static const ProtobufCIntRange core_entry__march__value_ranges[] = {
{0, 0},{0, 5}
};
static const ProtobufCEnumValueIndex core_entry__march__enum_values_by_name[5] =
{
  { "AARCH64", 3 },
  { "ARM", 2 },
  { "PPC64", 4 },
  { "UNKNOWN", 0 },
  { "X86_64", 1 },
};
const ProtobufCEnumDescriptor core_entry__march__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "core_entry.march",
  "march",
  "CoreEntry__March",
  "",
  5,
  core_entry__march__enum_values_by_number,
  5,
  core_entry__march__enum_values_by_name,
  1,
  core_entry__march__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor core_entry__field_descriptors[8] =
{
  {
    "mtype",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, mtype),
    &core_entry__march__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "thread_info",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, thread_info),
    &thread_info_x86__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tc",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, tc),
    &task_core_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ids",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, ids),
    &task_kobj_ids_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "thread_core",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, thread_core),
    &thread_core_entry__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ti_arm",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, ti_arm),
    &thread_info_arm__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ti_aarch64",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, ti_aarch64),
    &thread_info_aarch64__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ti_ppc64",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(CoreEntry, ti_ppc64),
    &thread_info_ppc64__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned core_entry__field_indices_by_name[] = {
  3,   /* field[3] = ids */
  0,   /* field[0] = mtype */
  2,   /* field[2] = tc */
  4,   /* field[4] = thread_core */
  1,   /* field[1] = thread_info */
  6,   /* field[6] = ti_aarch64 */
  5,   /* field[5] = ti_arm */
  7,   /* field[7] = ti_ppc64 */
};
static const ProtobufCIntRange core_entry__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 8, 6 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor core_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "core_entry",
  "CoreEntry",
  "CoreEntry",
  "",
  sizeof(CoreEntry),
  8,
  core_entry__field_descriptors,
  core_entry__field_indices_by_name,
  2,  core_entry__number_ranges,
  (ProtobufCMessageInit) core_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue seccomp_mode__enum_values_by_number[3] =
{
  { "disabled", "SECCOMP_MODE__disabled", 0 },
  { "strict", "SECCOMP_MODE__strict", 1 },
  { "filter", "SECCOMP_MODE__filter", 2 },
};
static const ProtobufCIntRange seccomp_mode__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex seccomp_mode__enum_values_by_name[3] =
{
  { "disabled", 0 },
  { "filter", 2 },
  { "strict", 1 },
};
const ProtobufCEnumDescriptor seccomp_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "seccomp_mode",
  "seccomp_mode",
  "SeccompMode",
  "",
  3,
  seccomp_mode__enum_values_by_number,
  3,
  seccomp_mode__enum_values_by_name,
  1,
  seccomp_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
